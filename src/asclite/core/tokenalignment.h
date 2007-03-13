/*
 * asclite
 * Author: Jerome Ajot, Nicolas Radde, Chris Laprun
 *
 * This software was developed at the National Institute of Standards and Technology by
 * employees of the Federal Government in the course of their official duties.  Pursuant to
 * Title 17 Section 105 of the United States Code this software is not subject to copyright
 * protection within the United States and is in the public domain. asclite is
 * an experimental system.  NIST assumes no responsibility whatsoever for its use by any party.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS."  With regard to this software, NIST MAKES NO EXPRESS
 * OR IMPLIED WARRANTY AS TO ANY MATTER WHATSOEVER, INCLUDING MERCHANTABILITY,
 * OR FITNESS FOR A PARTICULAR PURPOSE.
 */

#ifndef TOKENALIGNMENT_H
#define TOKENALIGNMENT_H

#include "stdinc.h"
#include "token.h"

class TokenAlignment 
{
    public:
        class AlignmentResult 
        {
            public:
                AlignmentResult(string _shortName = string("UNSET"), string _description = string("Unset description"));
                string GetDescription() { return m_description; }
                string GetShortName() { return m_shortName; }
                inline bool operator==(const AlignmentResult & rh) const { return m_shortName == rh.m_shortName; }
                
            private:
                string m_shortName;
                string m_description;
        };
        
        class AlignmentEvaluation 
        {
            public:
                AlignmentEvaluation(Token* token, TokenAlignment::AlignmentResult result = TokenAlignment::UNAVAILABLE);
                ~AlignmentEvaluation() {}
                Token* GetToken() { return m_token; }
                TokenAlignment::AlignmentResult GetResult() { return m_result; }
                void SetResult(TokenAlignment::AlignmentResult result) { m_result = result; }
                
                string ToString();
                bool Equals(AlignmentEvaluation* other);
            private:
                TokenAlignment::AlignmentResult m_result;
                Token* m_token;
        };
        
        TokenAlignment(Token* refToken);
        ~TokenAlignment();
        
        int AddAlignmentFor(string hypothesisKey, Token* hypothesisToken);
        AlignmentEvaluation* GetAlignmentFor(string system) { return m_alignmentEvaluations[system]; }
        AlignmentResult GetResultFor(string system);
        Token* GetTokenFor(string system);
        
        Token* GetReferenceToken();
        
        string ToString();
        bool Equals(TokenAlignment* other) { return (this == other); }
        inline bool operator==(const TokenAlignment &rh) { return (this->m_alignmentEvaluations == rh.m_alignmentEvaluations); }
        
        static const AlignmentResult CORRECT;
        static const AlignmentResult SUBSTITUTION;
        static const AlignmentResult SPEAKERSUB;
        static const AlignmentResult DELETION;
        static const AlignmentResult INSERTION;
        static const AlignmentResult REFERENCE;
        static const AlignmentResult INVALID_SYSTEM;
        static const AlignmentResult UNAVAILABLE;
        
        static const string REFERENCE_KEY;
        
    private:
        map< string, AlignmentEvaluation* > m_alignmentEvaluations; 
};

typedef map< string, TokenAlignment::AlignmentEvaluation* > t_alignmentMap;

#endif

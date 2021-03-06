#include "onmt/TranslationResult.h"

namespace onmt
{

  TranslationResult::TranslationResult(const std::vector<std::vector<std::vector<std::string> > >& words,
                                       const std::vector<std::vector<std::vector<std::vector<std::string> > > >& features,
                                       const std::vector<std::vector<std::vector<std::vector<float> > > >& attention,
                                       const std::vector<std::vector<float> >& score,
                                       const std::vector<std::vector<size_t> >& count_unk_words)
    : _words(words)
    , _features(features)
    , _attention(attention)
    , _score(score)
    , _count_unk_words(count_unk_words)
  {
  }

  const std::vector<std::string>& TranslationResult::get_words(size_t job_index, size_t translation_index) const
  {
    return _words[job_index][translation_index];
  }

  const std::vector<std::vector<std::string> >& TranslationResult::get_features(size_t job_index, size_t translation_index) const
  {
    return _features[job_index][translation_index];
  }

  const std::vector<std::vector<float> >& TranslationResult::get_attention(size_t job_index, size_t translation_index) const
  {
    return _attention[job_index][translation_index];
  }

  float TranslationResult::get_score(size_t job_index, size_t translation_index) const
  {
    return _score[job_index][translation_index];
  }

  size_t TranslationResult::get_count_unk_words(size_t job_index, size_t translation_index) const
  {
    return _count_unk_words[job_index][translation_index];
  }

  const std::vector<std::vector<std::string> >& TranslationResult::get_words_job(size_t job_index) const
  {
    return _words[job_index];
  }

  const std::vector<std::vector<std::vector<std::string> > >& TranslationResult::get_features_job(size_t job_index) const
  {
    return _features[job_index];
  }

  const std::vector<std::vector<std::vector<float> > >& TranslationResult::get_attention_job(size_t job_index) const
  {
    return _attention[job_index];
  }

  const std::vector<float>& TranslationResult::get_score_job(size_t job_index) const
  {
    return _score[job_index];
  }

  const std::vector<size_t>& TranslationResult::get_count_unk_words_job(size_t job_index) const
  {
    return _count_unk_words[job_index];
  }

  size_t TranslationResult::count_job(size_t job_index) const
  {
    return _words[job_index].size();
  }

  const std::vector<std::vector<std::vector<std::string> > >& TranslationResult::get_words_batch() const
  {
    return _words;
  }

  const std::vector<std::vector<std::vector<std::vector<std::string> > > >& TranslationResult::get_features_batch() const
  {
    return _features;
  }

  const std::vector<std::vector<std::vector<std::vector<float> > > >& TranslationResult::get_attention_batch() const
  {
    return _attention;
  }

  const std::vector<std::vector<float> >& TranslationResult::get_score_batch() const
  {
    return _score;
  }

  const std::vector<std::vector<size_t> >& TranslationResult::get_count_unk_words_batch() const
  {
    return _count_unk_words;
  }

  size_t TranslationResult::count() const
  {
    return _words.size();
  }

  bool TranslationResult::has_features() const
  {
    return !_features.empty();
  }

}

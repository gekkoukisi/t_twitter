/* C++ code produced by gperf version 3.0.3 */
/* Command-line: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/gperf -L C++ -E -t /private/var/folders/j_/_dhjk50157vdb11s4f1jqz5h0000gn/T/gekkoukisi/t_twitter-generated/KrollGeneratedBindings.gperf  */
/* Computed positions: -k'' */

#line 3 "/private/var/folders/j_/_dhjk50157vdb11s4f1jqz5h0000gn/T/gekkoukisi/t_twitter-generated/KrollGeneratedBindings.gperf"


#include <string.h>
#include <v8.h>
#include <KrollBindings.h>

#include "t.twitter.ExampleProxy.h"
#include "t.twitter.TTwitterModule.h"


#line 14 "/private/var/folders/j_/_dhjk50157vdb11s4f1jqz5h0000gn/T/gekkoukisi/t_twitter-generated/KrollGeneratedBindings.gperf"
struct titanium::bindings::BindEntry;
/* maximum key range = 3, duplicates = 0 */

class TTwitterBindings
{
private:
  static inline unsigned int hash (const char *str, unsigned int len);
public:
  static struct titanium::bindings::BindEntry *lookupGeneratedInit (const char *str, unsigned int len);
};

inline /*ARGSUSED*/
unsigned int
TTwitterBindings::hash (register const char *str, register unsigned int len)
{
  return len;
}

struct titanium::bindings::BindEntry *
TTwitterBindings::lookupGeneratedInit (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 2,
      MIN_WORD_LENGTH = 22,
      MAX_WORD_LENGTH = 24,
      MIN_HASH_VALUE = 22,
      MAX_HASH_VALUE = 24
    };

  static struct titanium::bindings::BindEntry wordlist[] =
    {
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""},
#line 16 "/private/var/folders/j_/_dhjk50157vdb11s4f1jqz5h0000gn/T/gekkoukisi/t_twitter-generated/KrollGeneratedBindings.gperf"
      {"t.twitter.ExampleProxy", ::t::twitter::ttwitter::ExampleProxy::bindProxy, ::t::twitter::ttwitter::ExampleProxy::dispose},
      {""},
#line 17 "/private/var/folders/j_/_dhjk50157vdb11s4f1jqz5h0000gn/T/gekkoukisi/t_twitter-generated/KrollGeneratedBindings.gperf"
      {"t.twitter.TTwitterModule", ::t::twitter::TTwitterModule::bindProxy, ::t::twitter::TTwitterModule::dispose}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if (*str == *s && !strcmp (str + 1, s + 1))
            return &wordlist[key];
        }
    }
  return 0;
}
#line 18 "/private/var/folders/j_/_dhjk50157vdb11s4f1jqz5h0000gn/T/gekkoukisi/t_twitter-generated/KrollGeneratedBindings.gperf"


/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10270022 */

/* Library Function - Single Match
    _setlocale
   
   Library: Visual Studio 2019 Release */

char * __cdecl _setlocale(int _Category,char *_Locale)

{
  char *pcVar1;
  int *local_18;
  char **local_14;
  undefined4 local_10;
  undefined4 local_c;
  __crt_seh_guarded_call<char*> local_5;
  
  ___acrt_eagerly_load_locale_apis();
  local_18 = &_Category;
  local_14 = &_Locale;
  local_c = 4;
  local_10 = 4;
  pcVar1 = __crt_seh_guarded_call<char*>::
           operator()<<lambda_646e26742ed01d5bc03234f44bb6d3d3>,<lambda_b37934c380d97b75fd242ea49540127a>&,<lambda_bbd9d45274666fbb50f81a29ad795c13>_>
                     (&local_5,(<lambda_646e26742ed01d5bc03234f44bb6d3d3> *)&local_10,
                      (<lambda_b37934c380d97b75fd242ea49540127a> *)&local_18,
                      (<lambda_bbd9d45274666fbb50f81a29ad795c13> *)&local_c);
  return pcVar1;
}


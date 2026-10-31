/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274537 */

/* Library Function - Single Match
    void __stdcall destroy_fls(void *)
   
   Library: Visual Studio 2019 Release */

void destroy_fls(void *param_1)

{
  if (param_1 != (void *)0x0) {
    destroy_ptd(param_1);
    FUN_10274120(param_1);
  }
  return;
}


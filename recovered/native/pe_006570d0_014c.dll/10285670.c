/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10285670 */

/* Library Function - Single Match
    __mbsdec
   
   Library: Visual Studio 2019 Release */

uchar * __cdecl __mbsdec(uchar *_Start,uchar *_Pos)

{
  uchar *puVar1;
  
  puVar1 = __mbsdec_l(_Start,_Pos,(_locale_t)0x0);
  return puVar1;
}


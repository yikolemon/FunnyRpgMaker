/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140039cca */

longlong FUN_140039cca(longlong param_1,char *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_14001ce79(&PTR_s_font_format_1400f45d0,param_2);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = FUN_14001d3fa(*(longlong *)(param_1 + 8),"sfnt");
      if ((plVar2 != (longlong *)0x0) && (*(longlong *)(*plVar2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140039d22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*(longlong *)(*plVar2 + 0x18) + 0x20))(param_1,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}


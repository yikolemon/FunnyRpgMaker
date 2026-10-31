/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014f2f5 */

longlong FUN_14014f2f5(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_140129475(&PTR_s_font_format_140e9d100);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FUN_1401299f6(*(longlong *)(param_1 + 8),&DAT_140ec386a);
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014014f344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,param_2,*(code **)(*plVar2 + 0x30));
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}


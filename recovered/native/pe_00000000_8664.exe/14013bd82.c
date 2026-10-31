/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013bd82 */

longlong FUN_14013bd82(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_140129475(&PTR_s_font_format_140e9b810);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FUN_1401299f6(*(longlong *)(param_1 + 8),&DAT_140ec386a);
      if ((plVar2 != (longlong *)0x0) && (*(longlong *)(*plVar2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014013bdda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*(longlong *)(*plVar2 + 0x18) + 0x20))(param_1,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}


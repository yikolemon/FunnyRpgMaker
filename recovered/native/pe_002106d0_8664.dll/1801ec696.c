/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ec696 */

longlong FUN_1801ec696(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1801ca4a1(&PTR_s_font_format_1803374b0);
  if (lVar1 == 0) {
    if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar2 = (longlong *)FUN_1801caa22(*(longlong *)(param_1 + 8),&DAT_180361947);
      if ((plVar2 != (longlong *)0x0) && (*(longlong *)(*plVar2 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001801ec6ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        lVar1 = (**(code **)(*(longlong *)(*plVar2 + 0x18) + 0x20))(param_1,param_2);
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}


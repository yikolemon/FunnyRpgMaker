/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140018f04 */

longlong * FUN_140018f04(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) != 0x7ffffffffffffff) {
    FUN_140018faa(&local_30,param_1,param_3);
    plVar2 = local_28;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    puVar1 = *(undefined8 **)(param_2 + 8);
    *local_28 = param_2;
    local_28[1] = (longlong)puVar1;
    local_28 = (longlong *)0x0;
    *(longlong **)(param_2 + 8) = plVar2;
    *puVar1 = plVar2;
    FUN_140019048((longlong)&local_30);
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086ab0(0x14011ae24);
}


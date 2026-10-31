/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006c814 */

longlong * FUN_18006c814(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 local_30 [8];
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if (*(longlong *)(param_1 + 8) != 0x333333333333333) {
    FUN_18006c8ba(local_30,param_1);
    plVar2 = local_28;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 1;
    puVar1 = *(undefined8 **)(param_2 + 8);
    *local_28 = param_2;
    local_28[1] = (longlong)puVar1;
    local_28 = (longlong *)0x0;
    *(longlong **)(param_2 + 8) = plVar2;
    *puVar1 = plVar2;
    FUN_18006c940(local_30);
    return plVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180239790("list too long");
}


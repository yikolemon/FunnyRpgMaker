/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180093846 */

undefined8 FUN_180093846(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 local_a0 [104];
  longlong local_38;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    local_38 = FUN_180239630(0x60);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      puVar2 = &DAT_1803861e4;
    }
    else {
      puVar2 = (undefined1 *)(lVar1 + 0x30);
      if (*(undefined1 **)(lVar1 + 0x28) != (undefined1 *)0x0) {
        puVar2 = *(undefined1 **)(lVar1 + 0x28);
      }
    }
    local_29 = 1;
    FUN_18000cdea(local_a0,puVar2);
    local_2a = 1;
    FUN_180093960(local_38,local_a0,0);
    *param_1 = local_38;
    local_2a = 0;
    FUN_18000d016(local_a0);
  }
  return 2;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002e3d6 */

longlong FUN_14002e3d6(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  plVar2 = *(longlong **)(param_1 + 0x1a0);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_48);
    puVar1 = (uint *)(param_1 + 0xe8);
    if (puVar1 != &local_48) {
      FUN_1400065bc(puVar1);
      *(undefined8 *)(param_1 + 0xf8) = local_38;
      *(undefined8 *)(param_1 + 0x100) = uStack_30;
      *puVar1 = local_48;
      *(undefined4 *)(param_1 + 0xec) = uStack_44;
      *(undefined4 *)(param_1 + 0xf0) = uStack_40;
      *(undefined4 *)(param_1 + 0xf4) = uStack_3c;
      local_38 = 0;
      uStack_30 = 0xf;
      local_48 = local_48 & 0xffffff00;
    }
    FUN_1400017de(&local_48);
  }
  return param_1;
}


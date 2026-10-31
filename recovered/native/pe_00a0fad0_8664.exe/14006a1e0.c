/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14006a1e0 */

undefined8 FUN_14006a1e0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong local_68;
  ulonglong local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [23];
  char local_21 [9];
  
  local_21[1] = -2;
  local_21[2] = -1;
  local_21[3] = -1;
  local_21[4] = -1;
  local_21[5] = -1;
  local_21[6] = -1;
  local_21[7] = -1;
  local_21[8] = -1;
  FUN_14006c892(local_38);
  local_21[0] = FUN_14006a94a(param_1 + 0x70,
                              (ulonglong)
                              (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 3,4,
                              local_38);
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  local_68 = ((longlong)uVar1 >> 0x3f & 0xe000000000000000U) +
             (uVar1 >> 5) * 4 + *(longlong *)(param_1 + 0x40);
  local_60 = (ulonglong)((uint)uVar1 & 0x1f);
  FUN_140069730(param_1 + 0x40,local_58,&local_68,1,local_21);
  if ((local_21[0] == '\x01') && (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0)) {
    FUN_14006af98(local_48,param_1 + 0xb8);
    uVar2 = FUN_14006c912(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) + 8),
                          param_2);
    uVar2 = FUN_14005783a(uVar2,local_48);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  FUN_1400578a6(local_38);
  return 1;
}


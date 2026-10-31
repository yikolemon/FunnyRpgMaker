/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180087440 */

undefined8 FUN_180087440(longlong param_1,undefined8 param_2)

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
  FUN_180088ac2(local_38);
  local_21[0] = FUN_18005262c(param_1 + 0x70,
                              (ulonglong)
                              (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 3,4,
                              local_38);
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  local_68 = ((longlong)uVar1 >> 0x3f & 0xe000000000000000U) +
             (uVar1 >> 5) * 4 + *(longlong *)(param_1 + 0x40);
  local_60 = (ulonglong)((uint)uVar1 & 0x1f);
  FUN_18001f704(param_1 + 0x40,local_58,&local_68,1,local_21);
  if ((local_21[0] == '\x01') && (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0)) {
    FUN_180087b9a(local_48,param_1 + 0xb8);
    uVar2 = FUN_180088b42(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) + 8),
                          param_2);
    uVar2 = FUN_1800856c4(uVar2,local_48);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  FUN_18007ff6e(local_38);
  return 1;
}


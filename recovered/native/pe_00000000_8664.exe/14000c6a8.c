/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14000c6a8 */

undefined8 FUN_14000c6a8(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 local_68 [16];
  longlong local_58;
  ulonglong local_50;
  undefined1 auStack_48 [16];
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
  FUN_14000f088(local_38);
  local_21[0] = FUN_14000ce02(param_1 + 0x70,
                              (ulonglong)
                              (*(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 8)) >> 3,4,
                              local_38);
  uVar1 = *(ulonglong *)(param_1 + 0x58);
  local_58 = ((longlong)uVar1 >> 0x3f & 0xe000000000000000U) +
             (uVar1 >> 5) * 4 + *(longlong *)(param_1 + 0x40);
  local_50 = (ulonglong)((uint)uVar1 & 0x1f);
  FUN_14000bc34(param_1 + 0x40,local_68,&local_58,1,local_21);
  if ((local_21[0] == '\x01') && (*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) != 0)) {
    FUN_14000d704(auStack_48,param_1 + 0xb8);
    FUN_14000f108(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + -8) + 8),&local_58,
                  param_2);
    uVar2 = FUN_14000a108(local_58 + 0x40,auStack_48);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
  }
  FUN_140004b06(local_38);
  return 1;
}


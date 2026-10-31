/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10118b53 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10118b53(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_1010ad36();
  *(ulonglong *)(param_1 + 0x50) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(iVar2 + 8) >> 0x20) + DAT_102b8e30._4_4_,
                (float)*(undefined8 *)(iVar2 + 8) + (float)DAT_102b8e30);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(iVar2 + 8);
  *(ulonglong *)(param_1 + 0x120) =
       CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + 0x120) >> 0x20) & _UNK_102b8b94,
                (uint)*(undefined8 *)(param_1 + 0x120) & _DAT_102b8b90) | (ulonglong)DAT_102b8e40;
  if (param_2 != 0) {
    FUN_1010d8a9(0);
    FUN_101291d0();
  }
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x54);
  if ((*(byte *)(param_1 + 0xc) & 0x40) == 0) {
    if (*(float *)(param_1 + 0x58) <= 0.0) {
      *(undefined1 *)(param_1 + 0x118) = 2;
    }
    if (*(float *)(param_1 + 0x5c) <= 0.0) {
      *(undefined1 *)(param_1 + 0x119) = 2;
    }
    bVar1 = true;
    if (*(char *)(param_1 + 0x118) < '\x01') {
      bVar1 = '\0' < *(char *)(param_1 + 0x119);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x118) = 0x202;
    bVar1 = false;
  }
  *(bool *)(param_1 + 0x11a) = bVar1;
  return;
}


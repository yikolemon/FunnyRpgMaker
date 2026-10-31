/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140770a23 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140770a23(uint param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uStack_18;
  
  uVar3 = (ulonglong)param_1;
  uStack_18 = 0x140770a2e;
  lVar2 = FUN_140762c06();
  *(ulonglong *)(uVar3 + 0x50) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(lVar2 + 8) >> 0x20) + fRam0000000150a2986e,
                (float)*(undefined8 *)(lVar2 + 8) + _DAT_150a2986a);
  *(undefined8 *)(uVar3 + 0x58) = 0;
  *(undefined8 *)(uVar3 + 0x60) = 0;
  *(undefined8 *)(uVar3 + 0x44) = *(undefined8 *)(lVar2 + 8);
  *(ulonglong *)(uVar3 + 0x120) =
       CONCAT44((uint)((ulonglong)*(undefined8 *)(uVar3 + 0x120) >> 0x20) & uRam0000000150a295f2,
                (uint)*(undefined8 *)(uVar3 + 0x120) & _DAT_150a295ee) | (ulonglong)DAT_150a298a5;
  if (param_2 != 0) {
    uStack_18 = 0;
    FUN_140765779(uVar3,4);
    *(undefined8 *)((ulonglong)((int)&uStack_18 + 4) - 8) = 0x140770a8a;
    FUN_1407810a0(param_1,param_2);
  }
  *(undefined4 *)(uVar3 + 0x168) = *(undefined4 *)(uVar3 + 0x54);
  *(undefined4 *)(uVar3 + 0x164) = *(undefined4 *)(uVar3 + 0x50);
  *(undefined4 *)(uVar3 + 0x154) = *(undefined4 *)(uVar3 + 0x50);
  *(undefined4 *)(uVar3 + 0x158) = *(undefined4 *)(uVar3 + 0x54);
  *(undefined4 *)(uVar3 + 0x15c) = *(undefined4 *)(uVar3 + 0x50);
  *(undefined4 *)(uVar3 + 0x160) = *(undefined4 *)(uVar3 + 0x54);
  if ((*(byte *)(uVar3 + 0xc) & 0x40) == 0) {
    if (*(float *)(ulonglong)(param_1 + 0x58) <= 0.0) {
      *(undefined1 *)(uVar3 + 0x118) = 2;
    }
    if (*(float *)(uVar3 + 0x5c) <= 0.0) {
      *(undefined1 *)(uVar3 + 0x119) = 2;
    }
    bVar1 = true;
    if (*(char *)(uVar3 + 0x118) < '\x01') {
      bVar1 = '\0' < *(char *)(uVar3 + 0x119);
    }
  }
  else {
    *(undefined2 *)(uVar3 + 0x118) = 0x202;
    bVar1 = false;
  }
  *(bool *)(uVar3 + 0x11a) = bVar1;
  return;
}


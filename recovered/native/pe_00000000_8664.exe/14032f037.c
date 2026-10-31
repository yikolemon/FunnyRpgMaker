/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032f037 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14032f037(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar3 = FUN_140320dbe();
  *(ulonglong *)(param_1 + 0x60) =
       CONCAT44((float)((ulonglong)*(undefined8 *)(lVar3 + 8) >> 0x20) + _UNK_1404efd94,
                (float)*(undefined8 *)(lVar3 + 8) + _DAT_1404efd90);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(lVar3 + 8);
  *(ulonglong *)(param_1 + 0x130) =
       CONCAT44((uint)((ulonglong)*(undefined8 *)(param_1 + 0x130) >> 0x20) & _UNK_1404efbe4,
                (uint)*(undefined8 *)(param_1 + 0x130) & _DAT_1404efbe0) | (ulonglong)DAT_1404efda0;
  if (param_2 != 0) {
    FUN_1403239bf(param_1,4,0);
    FUN_140340757(param_1,param_2);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x168) = uVar1;
  if ((*(byte *)(param_1 + 0x14) & 0x40) == 0) {
    if (*(float *)(param_1 + 0x68) <= 0.0) {
      *(undefined1 *)(param_1 + 0x128) = 2;
    }
    if (*(float *)(param_1 + 0x6c) <= 0.0) {
      *(undefined1 *)(param_1 + 0x129) = 2;
    }
    bVar2 = true;
    if (*(char *)(param_1 + 0x128) < '\x01') {
      bVar2 = '\0' < *(char *)(param_1 + 0x129);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x128) = 0x202;
    bVar2 = false;
  }
  *(bool *)(param_1 + 0x12a) = bVar2;
  return;
}


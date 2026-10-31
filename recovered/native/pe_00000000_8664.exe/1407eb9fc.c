/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eb9fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407eb9fc(void)

{
  uint uVar1;
  uint uVar2;
  float fVar4;
  float fVar5;
  ulonglong uVar3;
  
  uVar2 = (int)&stack0xfffffffffffffff0 - 0x1c;
  uVar3 = (ulonglong)uVar2;
  uVar1 = *(uint *)(uVar3 + 0x34);
  *(uint *)(uVar3 + 0x18) = _DAT_150b74725 ^ uVar2;
  if (*(uint *)(uVar3 + 0x38) < 4) {
                    /* WARNING: Could not emulate address calculation at 0x0001407eba48 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((ulonglong)*(uint *)(uVar3 + 0x38) * 4 + 0x10301498))();
    return;
  }
  fVar4 = *(float *)((ulonglong)*(uint *)((ulonglong)*(uint *)(uVar3 + 0x28) + 0x2c) + 0x14) *
          _DAT_150aa2ba7;
  fVar5 = fVar4 + *(float *)(uVar3 + 0x2c);
  fVar4 = *(float *)(uVar3 + 0x3c) * fVar4 + *(float *)(uVar3 + 0x30);
  *(undefined8 *)(uVar3 + 0x10 & 0xffffffff) = CONCAT44(fVar4 + 0.0,fVar5 + 0.0);
  *(undefined8 *)(uVar3 + 8 & 0xffffffff) = CONCAT44(fVar4 + 0.0,fVar5 + 0.0);
  *(undefined8 *)(ulonglong)uVar2 = CONCAT44(fVar4 + 0.0,fVar5 + 0.0);
  *(ulonglong *)(uVar3 - 8) = (ulonglong)uVar1;
  *(undefined8 **)(uVar3 - 0x10) = (undefined8 *)(uVar3 + 0x10 & 0xffffffff);
  *(undefined8 **)(uVar3 - 0x18) = (undefined8 *)(uVar3 + 8 & 0xffffffff);
  *(undefined8 **)(uVar3 - 0x20) = (undefined8 *)(ulonglong)uVar2;
  *(undefined8 *)(uVar3 - 0x28) = 0x1407ebaf9;
  FUN_1407e3d06();
  if (_DAT_150b74805 == (*(uint *)(uVar3 - 8) ^ (uint)(uVar3 - 0x20))) {
    return;
  }
  uVar1 = *(uint *)(uVar3 - 8);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar3 - 0x28) = FUN_1407ebb1a;
  FUN_1408802b0(uVar1 ^ (uint)(uVar3 - 0x20));
}


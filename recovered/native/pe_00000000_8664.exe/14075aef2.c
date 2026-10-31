/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14075aef2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14075aef2(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  undefined4 *puVar3;
  
  uVar2 = (int)&stack0x00000000 - 8;
  puVar3 = (undefined4 *)(ulonglong)uVar2;
  puVar3[1] = _DAT_150ae3bff ^ uVar2;
  *puVar3 = (int)(puVar3 + 4);
  *(ulonglong *)(puVar3 + -2) = (ulonglong)(puVar3 + 4) & 0xffffffff;
  *(ulonglong *)(puVar3 + -4) = (ulonglong)(uint)puVar3[3];
  *(undefined8 *)(puVar3 + -6) = 0x14075af13;
  FUN_14076dc0e();
  uVar2 = (int)(puVar3 + -4) + 8;
  uVar4 = (ulonglong)uVar2;
  if (_DAT_150ae3c22 == (*(uint *)(uVar4 + 4) ^ uVar2)) {
    return;
  }
  uVar1 = *(uint *)(uVar4 + 4);
                    /* WARNING: Subroutine does not return */
  *(code **)(uVar4 - 8) = FUN_14075af35;
  FUN_1408802b0(uVar1 ^ uVar2);
}


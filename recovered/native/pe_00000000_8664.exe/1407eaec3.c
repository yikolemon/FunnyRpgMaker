/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407eaec3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407eaec3(ulonglong param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  ulonglong uVar4;
  
  uVar3 = (int)&stack0xfffffffffffffff0 - 8;
  uVar4 = (ulonglong)uVar3;
  uVar6 = param_1 & 0xffffffff;
  if ((_DAT_150aec2f1 <= *(float *)(param_1 + 0x10)) || ((*(byte *)(uVar6 + 0x3f) & 0x10) != 0)) {
    puVar7 = (undefined4 *)(ulonglong)uVar3;
    *puVar7 = 0;
    *(undefined4 **)(uVar4 - 8) = puVar7;
    *(undefined8 *)(uVar4 - 0x10) = 0x1407eaf1c;
    iVar1 = FUN_1407eac09(uVar6,param_2);
    puVar5 = (undefined1 *)(ulonglong)((int)(uVar4 - 8) + 4);
    puVar2 = (undefined4 *)(ulonglong)(iVar1 + 4);
    if (iVar1 == 0) {
      puVar2 = puVar7;
    }
    uVar8 = *puVar2;
  }
  else {
    *(undefined8 *)(uVar4 - 8) = 0;
    *(undefined8 *)(uVar4 - 0x10) = 0x1407eaef5;
    iVar1 = FUN_1407eac09(uVar6,param_2);
    puVar5 = (undefined1 *)(ulonglong)((int)(uVar4 - 8) + 4);
    uVar3 = (int)param_1 + 0xc;
    if (iVar1 != 0) {
      uVar3 = iVar1 + 4;
    }
    uVar8 = *(undefined4 *)(ulonglong)uVar3;
  }
  if (_DAT_150b73c37 == (*(uint *)(puVar5 + 4) ^ (uint)puVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -8) = FUN_1407eaf4c;
  FUN_1408802b0(uVar8);
}


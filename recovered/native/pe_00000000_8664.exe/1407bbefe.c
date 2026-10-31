/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407bbefe */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407bbefe(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = (int)&stack0xffffffffffffffe0;
  uVar5 = iVar6 - 0x50;
  puVar7 = (undefined4 *)(ulonglong)uVar5;
  uVar1 = puVar7[0x19];
  uVar10 = (ulonglong)uVar1;
  uVar4 = (ulonglong)*(uint *)(uVar10 + 0x154);
  if ((((*(float *)(uVar10 + 200) <= *(float *)(uVar4 + 0x298) &&
         *(float *)(uVar4 + 0x298) != *(float *)(uVar10 + 200)) &&
       (*(float *)(uVar4 + 0x290) <= *(float *)(uVar10 + 0xd0) &&
        *(float *)(uVar10 + 0xd0) != *(float *)(uVar4 + 0x290))) &&
      (*(float *)(ulonglong)(uVar1 + 0xc4) <= *(float *)(uVar4 + 0x294) &&
       *(float *)(uVar4 + 0x294) != *(float *)(ulonglong)(uVar1 + 0xc4))) &&
     (*(float *)(uVar4 + 0x28c) <= *(float *)(uVar10 + 0xcc) &&
      *(float *)(uVar10 + 0xcc) != *(float *)(uVar4 + 0x28c))) {
    uVar2 = *(undefined4 *)((ulonglong)*(uint *)(uVar10 + 0x158) + 0x2e8);
    uVar3 = *(undefined4 *)(uVar10 + 0x168);
    puVar7[1] = 0;
    *puVar7 = uVar2;
    *(undefined8 *)(puVar7 + -2) = 0x1407bbf90;
    FUN_1407e5d3c(uVar3);
    piVar8 = (int *)(ulonglong)(iVar6 - 0x58);
    piVar8[2] = 0;
    piVar8[1] = uVar1 + 0x11c;
    *piVar8 = uVar1 + 0x114;
    piVar8[-2] = 0x407bbfb1;
    piVar8[-1] = 1;
    FUN_1407e0084(uVar2);
    puVar9 = (undefined4 *)(ulonglong)(iVar6 - 100);
    uVar2 = *(undefined4 *)(uVar10 + 0xd8);
    puVar9[1] = *(float *)((ulonglong)(*(short *)(uVar10 + 0x1de) < 1) * 0x10 + 0xd8 + uVar10) +
                *(float *)(uVar10 + 0xbc);
    *puVar9 = uVar2;
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -2) = &UNK_1407bc00c;
    FUN_140755a9a();
  }
  if (_DAT_150b450fa == (puVar7[0x13] ^ uVar5)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar7 + -2) = FUN_1407bc411;
  FUN_1408802b0(puVar7[0x13] ^ uVar5);
}


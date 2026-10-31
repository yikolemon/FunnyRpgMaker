/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18014d7a9 */

void FUN_18014d7a9(void)

{
  longlong lVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar6 = DAT_180419160;
  lVar4 = *(longlong *)(DAT_180419160 + 0x1608);
  FUN_18011a002(0);
  uVar8 = *(int *)(lVar4 + 0x1e0) - 1;
  *(uint *)(lVar4 + 0x1e0) = uVar8;
  if ((*(uint *)(lVar4 + 0x1e4) >> (uVar8 & 0x1f) & 1) != 0) {
    lVar5 = *(longlong *)(lVar6 + 0x2170);
    iVar3 = *(int *)(lVar6 + 0x2168);
    lVar1 = lVar5 + (longlong)iVar3 * 0x28;
    lVar9 = lVar1 + -0x28;
    if (((((*(byte *)(lVar1 + -0x22) & 2) != 0) && (*(char *)(lVar6 + 0x21f7) == '\x01')) &&
        (*(int *)(lVar6 + 0x22b0) == 0)) && (*(longlong *)(lVar6 + 0x2200) == lVar4)) {
      cVar7 = FUN_18011c165();
      if (cVar7 != '\0') {
        FUN_18011c18c(lVar6 + 0x22e8,lVar9);
      }
    }
    fVar2 = *(float *)(lVar5 + (longlong)iVar3 * 0x28 + -0xc);
    if (((fVar2 != DAT_1802de564) || (NAN(fVar2) || NAN(DAT_1802de564))) &&
       (*(float *)(lVar4 + 700) <= *(float *)(lVar4 + 0x15c))) {
      FUN_18014d5f5(lVar9);
    }
    *(int *)(lVar6 + 0x2168) = *(int *)(lVar6 + 0x2168) + -1;
    uVar8 = ~(1 << ((byte)uVar8 & 0x1f));
    *(ulonglong *)(lVar4 + 0x1e4) = CONCAT44(uVar8,uVar8) & *(ulonglong *)(lVar4 + 0x1e4);
  }
  FUN_18011834f();
  return;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fe2aa */

void FUN_1800fe2aa(longlong param_1,byte param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = *(longlong *)(param_1 + 0xe0);
  lVar6 = FUN_1800fdb15(lVar2,7,0xffffffff);
  if (lVar6 == 0) {
    bVar4 = *(byte *)(lVar2 + 0xc14) ^ 1;
  }
  else {
    bVar4 = *(byte *)(lVar6 + 0xc);
  }
  if ((param_2 != bVar4) && ((param_2 != 0 || (*(char *)(param_1 + 0x89) == '\0')))) {
    iVar5 = *(int *)(lVar2 + 0x1580);
    iVar1 = *(int *)(lVar2 + 0x15a4);
    *(int *)(lVar2 + 0x15a4) = iVar1 + 1;
    if (iVar5 == *(int *)(lVar2 + 0x1584)) {
      if (iVar5 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar5 / 2 + iVar5;
      }
      iVar8 = iVar5 + 1;
      if (iVar5 + 1 < iVar7) {
        iVar8 = iVar7;
      }
      lVar6 = FUN_1800fe7f8((longlong)iVar8 * 0x1c);
      if (*(longlong *)(lVar2 + 0x1588) != 0) {
        FUN_1802a82f0(lVar6,*(longlong *)(lVar2 + 0x1588),(longlong)*(int *)(lVar2 + 0x1580) * 0x1c)
        ;
        FUN_1800fe8d4(*(undefined8 *)(lVar2 + 0x1588));
      }
      *(longlong *)(lVar2 + 0x1588) = lVar6;
      *(int *)(lVar2 + 0x1584) = iVar8;
      iVar5 = *(int *)(lVar2 + 0x1580);
    }
    else {
      lVar6 = *(longlong *)(lVar2 + 0x1588);
    }
    lVar3 = (longlong)iVar5 * 0x1c;
    *(undefined8 *)(lVar6 + lVar3) = 7;
    *(int *)(lVar6 + 8 + lVar3) = iVar1;
    *(byte *)(lVar6 + 0xc + lVar3) = param_2;
    *(undefined8 *)(lVar6 + 0xd + lVar3) = 0;
    *(undefined8 *)(lVar6 + 0x14 + lVar3) = 0;
    *(int *)(lVar2 + 0x1580) = *(int *)(lVar2 + 0x1580) + 1;
  }
  return;
}


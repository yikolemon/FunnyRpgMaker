/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c602c */

ulonglong FUN_1400c602c(undefined4 param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 unaff_RDI;
  undefined7 uVar7;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar3 = DAT_140f2a910;
  uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if ((param_2 >> 8 & 1) != 0) goto LAB_1400c60e0;
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
  uVar2 = *(undefined8 *)(lVar1 + 0x200);
  if ((*(byte *)(DAT_140f2a910 + 0x1fa8) & 2) == 0) {
    iVar4 = FUN_1400789d0(uVar2,param_1,param_2 >> 5 & 1);
LAB_1400c6097:
    uVar5 = CONCAT71(uVar7,iVar4 != 0);
  }
  else {
    if ((*(byte *)(DAT_140f2a910 + 0x1fcd) & 1) == 0) {
      iVar4 = FUN_1400789d0(uVar2,param_1,0xffffffff);
      if (iVar4 != -1) goto LAB_1400c6097;
    }
    uVar5 = CONCAT71(uVar7,*(undefined1 *)(lVar3 + 0x1fcc));
    FUN_1400c600a(param_1,uVar5 & 0xffffffff);
  }
  uVar6 = uVar5;
  if (((param_2 & 0x10) == 0) && (*(char *)(lVar3 + 0x2a40) != '\0')) {
    uVar6 = 1;
    if (*(int *)(lVar3 + 0x2a80) <= *(int *)(lVar1 + 0x1e0) - *(int *)(lVar3 + 0x2a7c)) {
      uVar6 = uVar5 & 0xff;
    }
  }
LAB_1400c60e0:
  return uVar6 & 0xffffffff;
}


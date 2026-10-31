/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140329c6d */

ulonglong FUN_140329c6d(undefined8 param_1,uint param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  uint3 uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  undefined8 unaff_RBP;
  uint uVar13;
  
  lVar4 = DAT_14062a630;
  uVar13 = param_2 | 0xd000;
  if ((param_2 & 0x3c00) != 0) {
    uVar13 = param_2;
  }
  uVar6 = FUN_14032987c();
  if (*(uint *)(lVar4 + 0x1f98) == uVar6) {
    pcVar2 = (code *)swi(3);
    uVar9 = (*pcVar2)();
    return uVar9;
  }
  if (((uVar13 >> 0x10 & 1) != 0) && (*(longlong *)(lVar4 + 0x2200) == 0)) goto LAB_140329e37;
  if ((uVar13 >> 0xd & 1) != 0) {
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((*(byte *)(lVar4 + 0x2acd) & 2) != 0) {
      uVar10 = FUN_14031911e(uVar6);
      FUN_14030f4ba("e 0x%08X\n",uVar10,uVar13,param_3);
    }
    goto LAB_140329e39;
  }
  if ((*(int *)(lVar4 + 0x167c) == 0) || (*(int *)(lVar4 + 0x167c) == param_3)) {
LAB_140329d9a:
    if ((uVar13 >> 0x11 & 1) == 0) {
      puVar11 = (undefined4 *)(lVar4 + 0x1f9c);
    }
    else {
      puVar11 = (undefined4 *)(*(longlong *)(*(longlong *)(lVar4 + 0x1608) + 0x418) + 0x10);
    }
    iVar8 = FUN_140329e91(*puVar11,param_3,uVar13);
    if ((*(byte *)(lVar4 + 0x2acd) & 2) != 0) {
      uVar10 = FUN_14031911e(uVar6);
      FUN_14030f4ba(&DAT_14058e483,uVar10,uVar13,param_3,iVar8);
    }
    if (iVar8 != 0) {
      lVar12 = FUN_140329b16(uVar6);
      if ((int)(uint)*(ushort *)(lVar12 + 6) < iVar8) {
        *(int *)(lVar12 + 0xc) = param_3;
        *(short *)(lVar12 + 6) = (short)iVar8;
      }
      if (*(int *)(lVar12 + 8) == param_3) {
        uVar3 = (uint3)((uint)iVar8 >> 8);
        uVar9 = CONCAT71((uint7)uVar3,1);
        if ((*(byte *)(lVar4 + 0x2acd) & 2) != 0) {
          FUN_14030f4ba("08X -> 0x%08X\n");
          uVar9 = (ulonglong)CONCAT31(uVar3,*(int *)(lVar12 + 8) == param_3);
        }
        goto LAB_140329e39;
      }
    }
  }
  else if ((uVar13 >> 10 & 1) == 0) {
    if (*(char *)(lVar4 + 0xea) == '\x01') {
      cVar5 = FUN_140329e46(uVar6);
      if (cVar5 != '\0') {
        if ((*(byte *)(lVar4 + 0x2acd) & 2) != 0) {
          uVar10 = FUN_14031911e(uVar6);
          FUN_14030f4ba("update %d regions, texid=0x%llX, backend_data=0x%llX\n",uVar10,uVar13,
                        param_3);
        }
        goto LAB_140329e37;
      }
    }
    if ((-1 < (short)uVar13) && (*(char *)(lVar4 + 0x1f94) == '\x01')) {
      uVar7 = uVar6 & 0xffff0fff;
      if (((uVar6 & 0xffff0fff) == 0) && (uVar7 = uVar6, uVar6 - 1 < (uVar6 ^ uVar6 - 1))) {
        uVar1 = 0;
        if (uVar6 != 0) {
          for (; (uVar6 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
          }
        }
        uVar7 = uVar1 + 0x28b;
        if ((uVar1 & 0x1c) != 0xc) {
          uVar7 = uVar6;
        }
      }
      if (0xffffff87 < uVar7 - 0x278) goto LAB_140329e37;
    }
    goto LAB_140329d9a;
  }
LAB_140329e37:
  uVar9 = 0;
LAB_140329e39:
  return uVar9 & 0xffffffff;
}


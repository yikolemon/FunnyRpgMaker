/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004813a */

int * __fastcall FUN_1004813a(int *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  byte local_1e;
  
  local_1e = FUN_1000d720(param_1[3]);
  uVar3 = FUN_1000d784(param_1[3]);
  uVar4 = FUN_1000d7e8(param_1[3]);
  uVar7 = CONCAT11(uVar3,uVar4);
  iVar8 = param_1[1];
  iVar9 = param_1[2];
  *param_1 = iVar9;
  if (iVar9 != iVar8) {
    bVar1 = 0;
    do {
      iVar8 = FUN_1004640d(iVar9,iVar8,param_1 + 3);
      param_1[2] = iVar8;
      if (*param_1 == param_1[1]) {
        return param_1;
      }
      bVar5 = FUN_1000d720(param_1[3]);
      cVar6 = FUN_1000d7e8(param_1[3]);
      uVar3 = FUN_1000d83c(uVar7 >> 8);
      if (*(char *)((int)param_1 + 0x11) == '\0') {
        bVar2 = 0;
        if ((char)uVar7 == '\0') {
          uVar4 = 1;
          goto LAB_1004822d;
        }
LAB_10048234:
        bVar1 = bVar1 + 1;
        bVar11 = local_1e == 8;
        if (!bVar11) {
          bVar1 = 0;
        }
        if (bVar5 != 4 || local_1e != 0) {
          if ((local_1e < 5) && ((0x13U >> (local_1e & 0x1f) & 1) != 0)) {
            return param_1;
          }
          goto LAB_10048274;
        }
      }
      else {
        if (local_1e != 2) {
          if (local_1e == 0xc) {
            bVar2 = 1;
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
            bVar2 = 0;
          }
LAB_1004822d:
          *(undefined1 *)((int)param_1 + 0x11) = uVar4;
          goto LAB_10048234;
        }
        bVar2 = 0;
        bVar11 = false;
        bVar1 = 0;
LAB_10048274:
        uVar10 = (uint)bVar5;
        if ((bVar5 < 5) && ((0x13U >> (uVar10 & 0x1f) & 1) != 0)) {
          return param_1;
        }
        if ((local_1e == 0xb) || (local_1e == 5)) {
          uVar7 = CONCAT11(bVar5,uVar3) & 0xfeff;
          uVar3 = (undefined1)uVar7;
          if ((char)(uVar7 >> 8) != '\n') goto LAB_100482cb;
        }
        else if (((local_1e != 3) || (0xb < bVar5)) || ((0x868U >> (uVar10 & 0x1f) & 1) == 0)) {
LAB_100482cb:
          uVar7 = CONCAT11(local_1e - 6,uVar3) & 0xfbff;
          if (((bVar5 != 10 || (char)(uVar7 >> 8) != '\0') &&
              ((0xc < bVar5 || ((0x1204U >> (uVar10 & 0x1f) & 1) == 0)))) &&
             (!(bool)(cVar6 == '\0' & bVar2) && (local_1e != 7 && (char)uVar7 == '\0'))) {
            if (!bVar11 || bVar5 != 8) {
              return param_1;
            }
            if (!(bool)(bVar1 & 1)) {
              return param_1;
            }
          }
        }
      }
      uVar3 = FUN_1000d784(param_1[3]);
      iVar8 = param_1[1];
      iVar9 = param_1[2];
      *param_1 = iVar9;
      uVar7 = CONCAT11(uVar3,cVar6);
      local_1e = bVar5;
    } while (iVar9 != iVar8);
  }
  return param_1;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802070fc */

undefined8
FUN_1802070fc(char *param_1,uint param_2,undefined4 param_3,longlong param_4,int *param_5)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  char *pcVar11;
  int iVar12;
  undefined1 auStack_178 [40];
  char *local_150;
  byte local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_178;
  lVar1 = *(longlong *)(param_4 + 0xa0);
  uVar5 = FUN_1801ce63e(lVar1,param_3);
  iVar8 = (int)param_1;
  iVar12 = iVar8;
  if ((int)uVar5 == 0) {
    if (param_2 == 0) {
      uVar5 = 0;
    }
    else {
      local_150 = param_1 + param_2;
      bVar2 = true;
      pbVar6 = local_148;
      pbVar7 = local_148;
LAB_180207182:
      do {
        if (pbVar6 <= pbVar7) {
          uVar4 = FUN_1801ceb6f(lVar1);
          uVar9 = *(int *)(lVar1 + 8) - uVar4;
          if (uVar9 == 0) {
            uVar5 = 0xa0;
            goto LAB_18020726a;
          }
          if (0xff < uVar9) {
            uVar9 = 0x100;
          }
          uVar5 = FUN_1801ce682(lVar1,local_148,uVar9);
          if ((int)uVar5 != 0) goto LAB_18020726a;
          uVar9 = FUN_1801ceb6f(lVar1);
          pbVar6 = local_148 + ((ulonglong)uVar9 - (ulonglong)uVar4);
          pbVar7 = local_148;
        }
        bVar10 = *pbVar7;
        uVar9 = bVar10 - 0x30;
        if (uVar9 < 10) {
          bVar10 = 1;
        }
        else {
          if ((byte)(bVar10 + 0x9f) < 6) {
            bVar10 = bVar10 + 0xa9;
          }
          else {
            if (5 < (byte)(bVar10 + 0xbf)) {
              uVar5 = 0xa0;
              uVar9 = (uint)bVar10;
              if (0x3e < uVar9) goto LAB_18020726a;
              if ((0x100003601U >> ((ulonglong)uVar9 & 0x3f) & 1) == 0) {
                if ((ulonglong)uVar9 == 0x3e) {
                  uVar9 = 0;
                  bVar10 = 0;
                  goto LAB_180207220;
                }
                goto LAB_18020726a;
              }
              pbVar7 = pbVar7 + 1;
              goto LAB_180207182;
            }
            bVar10 = bVar10 - 0x37;
          }
          uVar9 = (uint)bVar10;
          bVar10 = 1;
        }
LAB_180207220:
        if (bVar2) {
          cVar3 = (char)uVar9 << 4;
          pcVar11 = param_1;
        }
        else {
          cVar3 = (char)uVar9 + *param_1;
          pcVar11 = param_1 + 1;
        }
        *param_1 = cVar3;
        bVar2 = (bool)(bVar2 ^ 1);
        pbVar7 = pbVar7 + 1;
        param_1 = pcVar11;
      } while ((bool)(bVar10 & pcVar11 < local_150));
      uVar5 = 0;
LAB_18020726a:
      iVar12 = (int)param_1;
    }
  }
  *param_5 = iVar12 - iVar8;
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_178)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_178);
  }
  return uVar5;
}


/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18012b716 */

void FUN_18012b716(char *param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  float local_84;
  float local_80;
  float local_7c [2];
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_b8;
  FUN_18013309a();
  cVar3 = FUN_18010759c(0xa0);
  lVar2 = DAT_180419160;
  if ((cVar3 != '\0') && (param_1 <= (char *)(param_2 + -10))) {
    fVar7 = (float)*(undefined8 *)(DAT_180419160 + 0x1fec);
    fVar8 = (float)((ulonglong)*(undefined8 *)(DAT_180419160 + 0x1fec) >> 0x20);
    pcVar6 = param_1;
    do {
      local_74 = 0;
      if ((((*pcVar6 == '0') && ((byte)(pcVar6[1] | 0x20U) == 0x78)) &&
          (iVar4 = FUN_18012b8d7(pcVar6 + 2,"%X",&local_74), iVar4 == 1)) &&
         ((9 < (byte)(pcVar6[10] - 0x30U) &&
          ((uVar5 = (byte)pcVar6[10] - 0x41, 0x25 < uVar5 ||
           ((0x3f0000003fU >> ((ulonglong)uVar5 & 0x3f) & 1) == 0)))))) {
        pcVar1 = pcVar6 + 10;
        local_98 = 0xbf800000;
        FUN_1801023ca(local_7c,param_1,pcVar6,0);
        local_98 = 0xbf800000;
        FUN_1801023ca(&local_84,pcVar6,pcVar1);
        *(float *)(lVar2 + 0x1fec) = local_7c[0] + fVar7;
        *(float *)(lVar2 + 0x1ff0) = fVar8 + 0.0;
        *(ulonglong *)(lVar2 + 0x1ff4) = CONCAT44(local_80 + fVar8,local_84 + local_7c[0] + fVar7);
        cVar3 = FUN_180107af4(lVar2 + 0x1fec,lVar2 + 0x1ff4,1);
        pcVar6 = pcVar1;
        if (cVar3 != '\0') {
          FUN_180129d64(local_74);
        }
      }
      pcVar6 = pcVar6 + 1;
    } while (pcVar6 <= (char *)(param_2 + -10));
  }
  if (DAT_180402640 != (local_70 ^ (ulonglong)auStack_b8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_70 ^ (ulonglong)auStack_b8);
  }
  return;
}


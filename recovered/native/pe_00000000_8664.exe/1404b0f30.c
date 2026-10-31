/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b0f30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1404b0f30(uint param_1,short *param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  short *psVar5;
  int iVar6;
  ulonglong uVar7;
  short *psVar8;
  short sVar9;
  short *psVar10;
  longlong lVar11;
  longlong lVar12;
  short local_res8 [4];
  short local_res10 [4];
  int local_res18 [2];
  
  lVar11 = 0;
  uVar7 = (ulonglong)(param_1 & 0x3f);
  lVar12 = (longlong)(int)param_1 >> 6;
  lVar3 = (&DAT_1406328d0)[lVar12];
  uVar4 = *(undefined8 *)(lVar3 + 0x28 + uVar7 * 0x48);
  if ((param_3 == 0) || (*param_2 != 10)) {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar7 * 0x48);
    *pbVar1 = *pbVar1 & 0xfb;
  }
  else {
    pbVar1 = (byte *)(lVar3 + 0x38 + uVar7 * 0x48);
    *pbVar1 = *pbVar1 | 4;
  }
  psVar10 = param_2;
  psVar5 = param_2;
  do {
    if (param_2 + param_3 <= psVar5) goto LAB_1404b110a;
    sVar9 = *psVar5;
    if (sVar9 == 0x1a) {
      bVar2 = *(byte *)((&DAT_1406328d0)[lVar12] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48);
      if ((bVar2 & 0x40) != 0) {
        *psVar10 = 0x1a;
        goto LAB_1404b1107;
      }
      *(byte *)((&DAT_1406328d0)[lVar12] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = bVar2 | 2;
      goto LAB_1404b110a;
    }
    psVar8 = psVar5 + 1;
    if (sVar9 == 0xd) {
      if (param_2 + param_3 <= psVar8) {
        local_res8[0] = 0;
        local_res18[0] = 0;
        iVar6 = (*_DAT_14059e140)(uVar4,local_res8,2,local_res18,0);
        if ((iVar6 == 0) || (local_res18[0] == 0)) {
LAB_1404b10ce:
          *psVar10 = 0xd;
          goto LAB_1404b1107;
        }
        if ((*(byte *)((&DAT_1406328d0)[lVar12] + 0x38 + uVar7 * 0x48) & 0x48) == 0) {
          if ((local_res8[0] != 10) || (psVar10 != param_2)) {
            FUN_1404a8b34(param_1,0xfffffffffffffffe,1);
            if (local_res8[0] != 10) goto LAB_1404b10ce;
            goto LAB_1404b110a;
          }
        }
        else if (local_res8[0] != 10) {
          local_res10[0] = local_res8[0];
          *psVar10 = 0xd;
          do {
            *(undefined1 *)
             ((&DAT_1406328d0)[lVar12] + (ulonglong)(param_1 & 0x3f) * 0x48 + 0x3a + lVar11) =
                 *(undefined1 *)((longlong)local_res10 + lVar11);
            lVar11 = lVar11 + 1;
          } while (lVar11 < 2);
          *(undefined1 *)((&DAT_1406328d0)[lVar12] + 0x3c + (ulonglong)(param_1 & 0x3f) * 0x48) = 10
          ;
LAB_1404b1107:
          psVar10 = psVar10 + 1;
LAB_1404b110a:
          return (int)((longlong)psVar10 - (longlong)param_2 >> 1) * 2;
        }
        *psVar10 = 10;
        goto LAB_1404b1107;
      }
      if (*psVar8 == 10) {
        psVar8 = psVar5 + 2;
        sVar9 = 10;
      }
    }
    *psVar10 = sVar9;
    psVar10 = psVar10 + 1;
    psVar5 = psVar8;
  } while( true );
}


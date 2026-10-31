/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027f42b */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1027f42b(DWORD *param_1,uint param_2,short *param_3,int param_4)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  BOOL BVar4;
  DWORD DVar5;
  uint uVar6;
  short *psVar7;
  DWORD local_1418;
  HANDLE local_1414;
  short *local_1410;
  undefined1 local_140c [3416];
  short local_6b4 [854];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_1414 = *(HANDLE *)((&DAT_103a5230)[(int)param_2 >> 6] + 0x18 + (param_2 & 0x3f) * 0x38);
  local_1410 = (short *)(param_4 + (int)param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  psVar7 = param_3;
  if (param_3 < local_1410) {
    do {
      psVar2 = local_6b4;
      do {
        if (local_1410 <= psVar7) break;
        sVar1 = *psVar7;
        psVar7 = psVar7 + 1;
        if (sVar1 == 10) {
          *psVar2 = 0xd;
          psVar2 = psVar2 + 1;
        }
        *psVar2 = sVar1;
        psVar2 = psVar2 + 1;
      } while (psVar2 < local_6b4 + 0x354);
      uVar3 = FUN_10274283(0xfde9,0,local_6b4,(int)psVar2 - (int)local_6b4 >> 1,local_140c,0xd55,0,0
                          );
      if (uVar3 == 0) {
LAB_1027f544:
        DVar5 = GetLastError();
        *param_1 = DVar5;
        break;
      }
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          BVar4 = WriteFile(local_1414,local_140c + uVar6,uVar3 - uVar6,&local_1418,
                            (LPOVERLAPPED)0x0);
          if (BVar4 == 0) goto LAB_1027f544;
          uVar6 = uVar6 + local_1418;
        } while (uVar6 < uVar3);
      }
      param_1[1] = (int)psVar7 - (int)param_3;
    } while (psVar7 < local_1410);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


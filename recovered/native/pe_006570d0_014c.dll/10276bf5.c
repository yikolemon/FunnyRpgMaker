/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10276bf5 */

void FUN_10276bf5(int param_1)

{
  char cVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  BYTE *pBVar6;
  int iVar7;
  int iVar8;
  _cpinfo local_71c;
  ushort local_708 [512];
  byte local_308 [256];
  byte local_208 [256];
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_71c), BVar3 == 0)) {
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (pbVar5 + (-0x5a - param_1) < (byte *)0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        cVar1 = (char)pbVar5 + ' ';
LAB_10276d71:
        bVar2 = cVar1 + (char)(-0x19 - param_1);
      }
      else {
        if (pbVar5 + (-0x7a - param_1) < (byte *)0x1a) {
          *pbVar5 = *pbVar5 | 0x20;
          cVar1 = (char)pbVar5 + -0x20;
          goto LAB_10276d71;
        }
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      pbVar5 = pbVar5 + 1;
    } while (pbVar5 + (-0x19 - param_1) < (byte *)0x100);
  }
  else {
    iVar8 = 0x100;
    uVar4 = 0;
    do {
      local_108[uVar4] = (char)uVar4;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x100);
    pBVar6 = local_71c.LeadByte;
    local_108[0] = 0x20;
    while (local_71c.LeadByte[0] != 0) {
      bVar2 = pBVar6[1];
      for (uVar4 = (uint)local_71c.LeadByte[0]; (uVar4 <= bVar2 && (uVar4 < 0x100));
          uVar4 = uVar4 + 1) {
        local_108[uVar4] = 0x20;
      }
      pBVar6 = pBVar6 + 2;
      local_71c.LeadByte[0] = *pBVar6;
    }
    FUN_10276080(0,1,local_108,0x100,local_708,*(undefined4 *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              (0,*(undefined4 *)(param_1 + 0x21c),0x100,local_108,0x100,local_208,0x100,
               *(undefined4 *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              (0,*(undefined4 *)(param_1 + 0x21c),0x200,local_108,0x100,local_308,0x100,
               *(undefined4 *)(param_1 + 4),0);
    pbVar5 = (byte *)(param_1 + 0x19);
    iVar7 = 0;
    do {
      if ((local_708[iVar7] & 1) == 0) {
        if ((local_708[iVar7] & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = local_308[iVar7];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = local_208[iVar7];
      }
      iVar7 = iVar7 + 1;
      pbVar5[0x100] = bVar2;
      pbVar5 = pbVar5 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00497eac */

void FUN_00497eac(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  BOOL BVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined4 in_stack_fffff8e8;
  byte local_714 [12];
  WORD local_708 [512];
  WCHAR local_308 [128];
  WCHAR local_208 [128];
  CHAR local_108 [256];
  uint local_8;
  
  bVar3 = SUB41(in_stack_fffff8e8,2);
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(param_1 + 4) == 0xfde9) ||
     (BVar4 = GetCPInfo(*(UINT *)(param_1 + 4),(LPCPINFO)&stack0xfffff8e4), BVar4 == 0)) {
    pbVar6 = (byte *)(param_1 + 0x19);
    do {
      if (pbVar6 + (-0x5a - param_1) < (byte *)0x1a) {
        *pbVar6 = *pbVar6 | 0x10;
        cVar2 = (char)pbVar6 + ' ';
LAB_00498028:
        bVar3 = cVar2 + (char)(-0x19 - param_1);
      }
      else {
        if (pbVar6 + (-0x7a - param_1) < (byte *)0x1a) {
          *pbVar6 = *pbVar6 | 0x20;
          cVar2 = (char)pbVar6 + -0x20;
          goto LAB_00498028;
        }
        bVar3 = 0;
      }
      pbVar6[0x100] = bVar3;
      pbVar6 = pbVar6 + 1;
    } while (pbVar6 + (-0x19 - param_1) < (byte *)0x100);
  }
  else {
    iVar8 = 0x100;
    uVar5 = 0;
    do {
      local_108[uVar5] = (CHAR)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x100);
    pbVar6 = &stack0xfffff8ea;
    local_108[0] = ' ';
    while (bVar3 != 0) {
      bVar1 = pbVar6[1];
      for (uVar5 = (uint)bVar3; (uVar5 <= bVar1 && (uVar5 < 0x100)); uVar5 = uVar5 + 1) {
        local_108[uVar5] = ' ';
      }
      pbVar6 = pbVar6 + 2;
      bVar3 = *pbVar6;
    }
    FUN_00497350((int *)0x0,1,local_108,0x100,local_708,*(uint *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              ((int *)0x0,*(ushort **)(param_1 + 0x21c),0x100,local_108,0x100,local_208,0x100,
               *(uint *)(param_1 + 4),0);
    ___acrt_LCMapStringA
              ((int *)0x0,*(ushort **)(param_1 + 0x21c),0x200,local_108,0x100,local_308,0x100,
               *(uint *)(param_1 + 4),0);
    pbVar6 = (byte *)(param_1 + 0x19);
    iVar7 = 0;
    do {
      if ((local_708[iVar7] & 1) == 0) {
        if ((local_708[iVar7] & 2) == 0) {
          bVar3 = 0;
        }
        else {
          *pbVar6 = *pbVar6 | 0x20;
          bVar3 = *(byte *)((int)local_308 + iVar7);
        }
      }
      else {
        *pbVar6 = *pbVar6 | 0x10;
        bVar3 = *(byte *)((int)local_208 + iVar7);
      }
      iVar7 = iVar7 + 1;
      pbVar6[0x100] = bVar3;
      pbVar6 = pbVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}


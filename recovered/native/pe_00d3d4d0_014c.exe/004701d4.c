/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004701d4 */

int __fastcall FUN_004701d4(int param_1,int *param_2,ushort param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  uVar4 = (uint)param_3;
  local_14 = DAT_0050e8c0 ^ (uint)&local_20;
  iVar2 = 3;
  if (uVar4 <= param_4 && uVar4 < 0x183) {
    iVar2 = param_2[7];
    local_20 = param_2;
    local_1c = param_1;
    iVar1 = FUN_0041efcd(iVar2,2,0,uVar4,0,&local_18);
    if (local_18 == 0) {
      local_18 = FUN_00420be1(local_20,uVar4);
      if (local_18 == 0) {
        if (param_3 != 0) {
          iVar2 = local_20[8];
          uVar3 = 0;
          do {
            uVar5 = (int)*(char *)(iVar2 + uVar3) + uVar3;
            if (0x101 < uVar5) {
              uVar5 = 0;
            }
            *(short *)(iVar1 + uVar3 * 2) = (short)uVar5;
            uVar3 = uVar3 + 1;
          } while (uVar4 != uVar3);
        }
        FUN_00420cde(local_20);
        *(ushort *)(local_1c + 2) = param_3;
        *(int *)(local_1c + 8) = iVar1;
        iVar2 = 0;
        goto LAB_00470253;
      }
    }
    FUN_0041c607(iVar2,iVar1);
    iVar2 = local_18;
  }
LAB_00470253:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_20)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_20);
}


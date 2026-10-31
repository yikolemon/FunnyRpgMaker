/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043e696 */

int __fastcall FUN_0043e696(int param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  uint uStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&uStack_1c;
  iVar3 = param_2[7];
  iStack_18 = (**(code **)(param_1 + 0x204))(param_1,0x63767420,param_2,&uStack_1c);
  if (iStack_18 == 0) {
    *(uint *)(param_1 + 0x2c0) = uStack_1c >> 1;
    iVar3 = FUN_0041efcd(iVar3,4,0,uStack_1c >> 1,0,&iStack_18);
    *(int *)(param_1 + 0x2c4) = iVar3;
    iVar3 = iStack_18;
    if ((iStack_18 == 0) &&
       (iStack_18 = FUN_00420be1(param_2,*(int *)(param_1 + 0x2c0) * 2), iVar3 = iStack_18,
       iStack_18 == 0)) {
      if (*(int *)(param_1 + 0x2c0) != 0) {
        piVar4 = *(int **)(param_1 + 0x2c4);
        piVar1 = piVar4 + *(int *)(param_1 + 0x2c0);
        do {
          uVar2 = FUN_00420d1e((int)param_2);
          *piVar4 = (int)(short)uVar2 << 6;
          piVar4 = piVar4 + 1;
        } while (piVar4 < piVar1);
      }
      FUN_00420cde(param_2);
      iVar3 = iStack_18;
      if (*(char *)(param_1 + 0x2dd) != '\0') {
        iVar3 = FUN_0043e791(param_1,param_2);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    iVar3 = 0;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&uStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&uStack_1c);
  }
  return iVar3;
}


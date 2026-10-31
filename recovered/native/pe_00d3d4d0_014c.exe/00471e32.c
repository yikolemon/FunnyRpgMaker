/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00471e32 */

undefined1 * __fastcall FUN_00471e32(int param_1,int *param_2,int param_3,undefined *param_4)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_24;
  local_20 = param_2;
  puVar4 = (undefined1 *)FUN_0041e773(param_1,*(ushort *)(param_3 + 8) + 1,&local_18);
  piVar3 = local_20;
  puVar6 = (undefined1 *)0x0;
  if (local_18 == 0) {
    local_24 = puVar4;
    local_18 = FUN_00420696((int)local_20,*(uint *)(param_3 + 0xc));
    if ((local_18 == 0) &&
       (local_18 = FUN_00420be1(piVar3,(uint)*(ushort *)(param_3 + 8)), local_18 == 0)) {
      uVar1 = *(ushort *)(param_3 + 8);
      if (uVar1 == 0) {
        *local_24 = 0;
        FUN_00420cde(piVar3);
      }
      else {
        iVar2 = piVar3[8];
        uVar7 = 0;
        puVar4 = local_24;
        local_1c = param_1;
        do {
          iVar5 = (*(code *)param_4)((int)*(char *)(iVar2 + uVar7));
          if (iVar5 != 0) {
            *puVar4 = *(undefined1 *)(iVar2 + uVar7);
            puVar4 = puVar4 + 1;
          }
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
        *puVar4 = 0;
        FUN_00420cde(local_20);
        puVar6 = local_24;
        param_1 = local_1c;
        if (puVar4 != local_24) goto LAB_00471ec2;
      }
    }
    FUN_0041c607(param_1,(int)local_24);
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined2 *)(param_3 + 8) = 0;
    FUN_0041c607(param_1,*(int *)(param_3 + 0x10));
    *(undefined4 *)(param_3 + 0x10) = 0;
    puVar6 = (undefined1 *)0x0;
  }
LAB_00471ec2:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_24);
  }
  return puVar6;
}


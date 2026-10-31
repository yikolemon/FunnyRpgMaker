/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043ff56 */

int __fastcall FUN_0043ff56(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  undefined4 uVar9;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  uint local_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
  piVar1 = *(int **)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x2e0);
  uVar9 = 0x56564152;
  puVar4 = (undefined1 *)(iVar2 + 0x2c);
  if (param_2 == 0) {
    uVar9 = 0x48564152;
    puVar4 = (undefined1 *)(iVar2 + 0x20);
  }
  local_2c = piVar1[7];
  *puVar4 = 1;
  iStack_18 = (**(code **)(param_1 + 0x204))(param_1,uVar9,piVar1,&local_1c);
  iVar8 = iStack_18;
  if (iStack_18 == 0) {
    iStack_28 = iVar2;
    iStack_24 = param_2;
    iStack_20 = FUN_00420b00((int)piVar1);
    uVar3 = FUN_0042070a(piVar1,&iStack_18);
    iVar8 = iStack_18;
    if ((((iStack_18 == 0) &&
         (iStack_18 = FUN_004206ea((int)piVar1,2), iVar8 = iStack_18, iStack_18 == 0)) &&
        (iVar8 = 8, uVar3 == 1)) &&
       ((uVar5 = FUN_004209e8(piVar1,&iStack_18), iVar8 = iStack_18, iStack_18 == 0 &&
        (uVar6 = FUN_004209e8(piVar1,&iStack_18), iVar8 = iStack_18, iStack_18 == 0)))) {
      puVar7 = FUN_0041c507(local_2c,0x20,&iStack_18);
      iVar2 = iStack_20;
      if ((char)iStack_24 == '\0') {
        *(uint **)(iStack_28 + 0x28) = puVar7;
      }
      else {
        *(uint **)(iStack_28 + 0x34) = puVar7;
      }
      iVar8 = iStack_18;
      if (((iStack_18 == 0) &&
          (iVar8 = FUN_0043d413(param_1,uVar5 + iStack_20,puVar7), iStack_18 = iVar8, iVar8 == 0))
         && ((local_2c = param_1, uVar6 == 0 ||
             (iVar8 = FUN_0043d238(param_1,uVar6 + iVar2,puVar7 + 5,puVar7,local_1c), iVar8 == 0))))
      {
        puVar4 = (undefined1 *)(iStack_28 + 0x2d);
        uVar5 = 0x10;
        if ((char)iStack_24 == '\0') {
          uVar5 = 2;
          puVar4 = (undefined1 *)(iStack_28 + 0x21);
        }
        *puVar4 = 1;
        *(uint *)(local_2c + 0x2e4) = *(uint *)(local_2c + 0x2e4) | uVar5;
        iVar8 = 0;
      }
    }
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_2c)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_2c);
}


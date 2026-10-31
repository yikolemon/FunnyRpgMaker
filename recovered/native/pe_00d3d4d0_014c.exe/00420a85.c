/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00420a85 */

void __cdecl
FUN_00420a85(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    *(undefined4 *)(param_4 + iVar3) = 0;
    if (param_2 == 0) {
      *(undefined4 *)(param_6 + iVar3) = 0;
      iVar1 = iVar3;
LAB_00420acd:
      uVar2 = (**(code **)((int)&PTR_FUN_004d7314 + iVar3 * 2))
                        (param_1,param_2,param_3,param_4 + iVar3,param_5 + iVar3);
      *(undefined4 *)(param_6 + iVar1) = uVar2;
    }
    else {
      iVar1 = FUN_00420696(param_2,0);
      *(int *)(param_6 + iVar3) = iVar1;
      if (iVar1 == 0) {
        iVar1 = iVar4 * 4;
        goto LAB_00420acd;
      }
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    if (iVar3 == 0x24) {
      return;
    }
  } while( true );
}


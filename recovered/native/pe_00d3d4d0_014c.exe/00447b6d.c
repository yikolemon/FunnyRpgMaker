/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00447b6d */

int __cdecl FUN_00447b6d(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_1c [3];
  undefined1 local_19;
  undefined4 local_18 [2];
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)auStack_1c;
  iVar2 = FUN_00447be0(param_1,param_2,local_18,&local_19);
  if ((iVar2 == 0) &&
     (piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x80) + 0x34), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 4))(piVar1[1],local_18);
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)auStack_1c)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)auStack_1c);
}


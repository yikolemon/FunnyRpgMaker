/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044827b */

int __fastcall FUN_0044827b(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iStack_604;
  undefined1 local_600 [40];
  int iStack_5d8;
  undefined1 uStack_5bc;
  undefined1 uStack_5ba;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&iStack_604;
  iVar2 = *(int *)(param_1 + 0x1ec);
  *param_2 = 0;
  iVar1 = (*(code *)**(undefined4 **)(iVar2 + 0xc))
                    (local_600,param_1,0,0,*(undefined4 *)(param_1 + 0x1a8),
                     *(undefined4 *)(param_1 + 0x214),0,0,FUN_00447b6d);
  if (iVar1 == 0) {
    uStack_5ba = 1;
    uStack_5bc = 0;
    uStack_ac = *(undefined4 *)(param_1 + 0x194);
    uStack_a8 = *(undefined8 *)(param_1 + 0x198);
    uStack_a0 = *(undefined4 *)(param_1 + 0x1a0);
    uStack_28 = *(undefined4 *)(param_1 + 0x224);
    uStack_24 = *(undefined4 *)(param_1 + 0x220);
    *param_2 = 0;
    iStack_604 = iVar2;
    if (0 < *(int *)(param_1 + 0x1a4)) {
      iVar2 = 0;
      do {
        FUN_00447b6d((int)local_600,iVar2);
        if ((iVar2 == 0) || (*param_2 < iStack_5d8)) {
          *param_2 = iStack_5d8;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x1a4));
    }
    (**(code **)(*(int *)(iStack_604 + 0xc) + 4))(local_600);
    iVar1 = 0;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&iStack_604)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&iStack_604);
}


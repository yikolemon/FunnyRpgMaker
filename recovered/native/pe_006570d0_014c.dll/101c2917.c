/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c2917 */

int FUN_101c2917(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_c;
  if (param_1 == 0) {
    iVar2 = 0x23;
  }
  else if (*(int *)(param_1 + 0x58) == 0) {
    iVar2 = 0x24;
  }
  else {
    iVar2 = 6;
    if ((((param_2 != (int *)0x0) && (-1 < param_2[1])) && (-1 < param_2[2])) && (*param_2 < 5)) {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x58) + 0x28) + 0xc) = 0;
      pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x60) + 0xc) + 0x58);
      if (pcVar1 == (code *)0x0) {
        if ((*(uint *)(param_1 + 8) & 3) != 2) {
          if (DAT_10388d00 == (local_8 ^ (uint)&local_c)) {
            iVar2 = FUN_101c263c();
            return iVar2;
          }
          goto LAB_101c29d8;
        }
        iVar2 = FUN_101c233b(param_1,param_2,0,&local_c);
        if (iVar2 == 0) {
          iVar2 = FUN_101c28ce(param_1,local_c);
        }
      }
      else {
        iVar2 = (*pcVar1)(*(undefined4 *)(param_1 + 0x58),param_2);
      }
    }
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_c)) {
    return iVar2;
  }
LAB_101c29d8:
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


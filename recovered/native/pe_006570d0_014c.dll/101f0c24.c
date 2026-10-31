/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f0c24 */

int __fastcall FUN_101f0c24(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iStack_24;
  int iStack_20;
  short sStack_1a;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_24;
  (*(code *)**(undefined4 **)(param_4 + 4))(param_1,0,0,param_3);
  param_1[0x12] = (int)param_2;
  piVar1 = param_1 + 0x13;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)((int)param_1 + 0x5b) = 0;
  iStack_18 = FUN_101f160d(0xe);
  if (iStack_18 == 0) {
LAB_101f0c96:
    iStack_18 = FUN_101c461e(param_2,0);
    if (iStack_18 == 0) {
      iStack_18 = FUN_101f16b9(&iStack_20);
      if (iStack_18 == 0) {
        if (sStack_1a == -0x7fff) {
          *(undefined1 *)(param_1 + 0x17) = 1;
        }
        else {
          iStack_18 = FUN_101c461e(param_2,0);
          if (iStack_18 != 0) goto LAB_101f0cc4;
          iStack_20 = param_2[1];
        }
        if (param_2[5] == 0) {
          param_1[0x13] = *param_2 + param_2[2];
          param_1[0x14] = iStack_20;
          *(undefined1 *)((int)param_1 + 0x5d) = 1;
          iStack_18 = FUN_101c4672(param_2,iStack_20);
          if (iStack_18 == 0) {
            iVar3 = param_1[0x14];
LAB_101f0da3:
            iVar2 = param_1[0x13];
            param_1[1] = iVar2;
            *param_1 = iVar2;
            param_1[2] = iVar3 + iVar2;
            iVar3 = 0;
            goto LAB_101f0ce4;
          }
        }
        else {
          iStack_24 = iStack_20;
          iVar2 = FUN_101c21f6(param_3,iStack_20,&iStack_18);
          iVar3 = iStack_24;
          *piVar1 = iVar2;
          if (iStack_18 == 0) {
            iStack_18 = FUN_101c4659(param_2,iVar2,iStack_24);
            if (iStack_18 == 0) {
              param_1[0x14] = iVar3;
              goto LAB_101f0da3;
            }
          }
        }
      }
    }
  }
  else if ((char)iStack_18 == '\x02') {
    iStack_18 = FUN_101f160d(10);
    if (iStack_18 == 0) goto LAB_101f0c96;
  }
LAB_101f0cc4:
  iVar3 = iStack_18;
  if (*(char *)((int)param_1 + 0x5d) == '\0') {
    FUN_101c0017(param_3,*piVar1);
    *piVar1 = 0;
    iVar3 = iStack_18;
  }
LAB_101f0ce4:
  if (DAT_10388d00 == (local_14 ^ (uint)&iStack_24)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}


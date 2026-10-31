/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140081d9b */

int FUN_140081d9b(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  iVar3 = FUN_140081c88(param_1,&local_30);
  if (iVar3 == 0) {
    if (*(code **)(local_30 + 0x38) == (code *)0x0) {
      iVar3 = 6;
    }
    else {
      iVar3 = (**(code **)(local_30 + 0x38))(param_1,param_2);
      if (iVar3 + 1U < 2) {
        uVar1 = *(uint *)(param_1 + 8);
        *(uint *)(param_1 + 8) = uVar1 & 0xffff7fff;
        *(short *)(param_1 + 6) = (short)param_2;
        pcVar2 = *(code **)(local_30 + 0x58);
        if (pcVar2 == (code *)0x0) {
          if (iVar3 == -1) {
            iVar3 = 0;
            goto LAB_140081dc8;
          }
        }
        else {
          if (iVar3 == -1) {
            iVar3 = 0;
            if ((short)uVar1 < 0) {
              (*pcVar2)(param_1);
              iVar3 = 0;
            }
            goto LAB_140081dc8;
          }
          (*pcVar2)(param_1);
        }
        FUN_140081d20(param_1,&local_38);
        if ((local_38 != 0) && (*(code **)(local_38 + 0x38) != (code *)0x0)) {
          (**(code **)(local_38 + 0x38))(param_1);
        }
        iVar3 = 0;
        if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
          (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 0xb8));
          *(undefined8 *)(param_1 + 0xb8) = 0;
        }
      }
    }
  }
LAB_140081dc8:
  if (DAT_14012ea80 != (local_28 ^ (ulonglong)auStack_58)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_28 ^ (ulonglong)auStack_58);
  }
  return iVar3;
}


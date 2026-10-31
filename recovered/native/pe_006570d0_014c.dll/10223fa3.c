/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223fa3 */

int FUN_10223fa3(int param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iStack_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_1c;
  iVar3 = FUN_10223ec4();
  if (iVar3 == 0) {
    if (*(code **)(local_18 + 0x1c) == (code *)0x0) {
      iVar3 = 6;
    }
    else {
      iVar3 = (**(code **)(local_18 + 0x1c))(param_1,param_2);
      if (iVar3 + 1U < 2) {
        uVar1 = *(uint *)(param_1 + 8);
        *(uint *)(param_1 + 8) = uVar1 & 0xffff7fff;
        *(short *)(param_1 + 6) = (short)param_2;
        pcVar2 = *(code **)(local_18 + 0x2c);
        if (pcVar2 == (code *)0x0) {
          if (iVar3 == -1) {
            iVar3 = 0;
            goto LAB_10223fca;
          }
        }
        else {
          if (iVar3 == -1) {
            iVar3 = 0;
            if ((short)uVar1 < 0) {
              (*pcVar2)(param_1);
            }
            goto LAB_10223fca;
          }
          (*pcVar2)(param_1);
        }
        FUN_10223f44();
        if ((iStack_1c != 0) && (*(code **)(iStack_1c + 0x1c) != (code *)0x0)) {
          (**(code **)(iStack_1c + 0x1c))(param_1);
        }
        iVar3 = 0;
        if (*(code **)(param_1 + 0x78) != (code *)0x0) {
          (**(code **)(param_1 + 0x78))(*(undefined4 *)(param_1 + 0x74));
          *(undefined4 *)(param_1 + 0x74) = 0;
        }
      }
    }
  }
LAB_10223fca:
  if (DAT_10388d00 != (local_14 ^ (uint)&iStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}


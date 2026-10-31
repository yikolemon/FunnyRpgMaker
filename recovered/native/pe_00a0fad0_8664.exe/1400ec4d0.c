/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ec4d0 */

undefined8 *
FUN_1400ec4d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,short param_4,
             longlong param_5)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  undefined8 uVar4;
  short sVar5;
  
  if (param_5 != 0) {
    lVar2 = param_3[1];
    do {
      if (lVar2 == 0) {
LAB_1400ec551:
        *(undefined1 *)param_3 = 1;
      }
      else {
        if (**(longlong **)(lVar2 + 0x40) == 0) {
LAB_1400ec538:
          sVar5 = (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar2,param_4);
        }
        else {
          iVar1 = **(int **)(lVar2 + 0x58);
          if (iVar1 < 1) goto LAB_1400ec538;
          **(int **)(lVar2 + 0x58) = iVar1 + -1;
          psVar3 = (short *)**(longlong **)(lVar2 + 0x40);
          **(longlong **)(lVar2 + 0x40) = (longlong)(psVar3 + 1);
          *psVar3 = param_4;
          sVar5 = param_4;
        }
        if (sVar5 == -1) goto LAB_1400ec551;
      }
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  uVar4 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar4;
  return param_2;
}


/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14010cf24 */

void FUN_14010cf24(longlong *param_1,undefined2 *param_2,int param_3,int *param_4,longlong param_5)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  short sVar3;
  
  uVar2 = *(undefined8 *)(param_5 + 0x2c);
  puVar1 = param_2 + param_3;
  do {
    if (param_2 == puVar1) {
LAB_14010cfe8:
      *(undefined8 *)(param_5 + 0x2c) = uVar2;
      return;
    }
    if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) == 0) || (*(longlong *)(*param_1 + 8) != 0)) &&
       (sVar3 = FUN_1401165c0(*param_2,*param_1,param_5), sVar3 == -1)) {
      if ((*(char *)(param_5 + 0x30) == '\0') || (*(int *)(param_5 + 0x2c) != 0x2a)) {
        *param_4 = -1;
        goto LAB_14010cfe8;
      }
      if ((((*(uint *)(*param_1 + 0x14) >> 0xc & 1) != 0) && (*(longlong *)(*param_1 + 8) == 0)) ||
         (sVar3 = FUN_1401165c0(0x3f,*param_1,param_5), sVar3 != -1)) goto LAB_14010cfcf;
      *param_4 = -1;
    }
    else {
LAB_14010cfcf:
      *param_4 = *param_4 + 1;
    }
    param_2 = param_2 + 1;
  } while( true );
}


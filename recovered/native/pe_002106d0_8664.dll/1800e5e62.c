/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800e5e62 */

void FUN_1800e5e62(undefined8 param_1,undefined1 *param_2,float *param_3)

{
  ulonglong uVar1;
  float fVar2;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  switch(*param_2) {
  case 4:
    fVar2 = (float)(int)(char)param_2[8];
    break;
  case 5:
    fVar2 = (float)*(longlong *)(param_2 + 8);
    break;
  case 6:
    uVar1 = *(ulonglong *)(param_2 + 8);
    if ((longlong)uVar1 < 0) {
      fVar2 = (float)uVar1;
    }
    else {
      fVar2 = (float)(longlong)uVar1;
    }
    break;
  case 7:
    fVar2 = (float)*(double *)(param_2 + 8);
    break;
  default:
    local_20 = FUN_1800173a0(param_2);
    FUN_1800172c9(local_40,"type must be number, but is ");
    FUN_180017158(local_78,0x12e,local_40,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_78,&DAT_180391520);
  }
  *param_3 = fVar2;
  return;
}


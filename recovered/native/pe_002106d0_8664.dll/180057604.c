/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180057604 */

void FUN_180057604(undefined8 param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  switch(*param_2) {
  case 4:
    uVar1 = (uint)(byte)param_2[8];
    break;
  case 5:
    uVar1 = *(uint *)(param_2 + 8);
    break;
  case 6:
    uVar1 = *(uint *)(param_2 + 8);
    break;
  case 7:
    uVar1 = (uint)*(double *)(param_2 + 8);
    break;
  default:
    local_20 = FUN_1800173a0(param_2);
    FUN_1800172c9(local_40,"type must be number, but is ");
    FUN_180017158(local_78,0x12e,local_40,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_18026d5b0(local_78,&DAT_180391520);
  }
  *param_3 = uVar1;
  return;
}


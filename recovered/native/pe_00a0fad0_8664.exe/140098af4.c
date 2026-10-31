/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140098af4 */

void FUN_140098af4(undefined8 param_1,undefined1 *param_2,uint *param_3)

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
    uVar1 = (uint)(longlong)*(double *)(param_2 + 8);
    break;
  default:
    local_20 = FUN_14006c034(param_2);
    FUN_14006bf5d(local_40,"type must be number, but is ");
    FUN_14006bdec(local_78,0x12e,local_40,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_78,&DAT_140196700);
  }
  *param_3 = uVar1;
  return;
}


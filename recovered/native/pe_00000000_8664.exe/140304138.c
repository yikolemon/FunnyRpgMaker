/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140304138 */

void FUN_140304138(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined8 *unaff_RSI;
  int iVar3;
  
  cVar1 = FUN_140311f02(unaff_RBP + -0x50);
  if (cVar1 != '\0') {
    for (iVar3 = *(int *)(unaff_RBP + -0x50); *(int *)(unaff_RBP + 0x24) = iVar3,
        iVar3 < *(int *)(unaff_RBP + -0x4c); iVar3 = iVar3 + 1) {
      uVar2 = FUN_14026c6f4(s___AV___Func_impl_no_alloc_V<lamb_140613f30._72_4_,
                            (longlong)*(int *)*unaff_RSI,(longlong)iVar3);
      *(undefined8 *)(unaff_RBP + 0x18) = uVar2;
      *(char **)(unaff_RBP + 8) =
           "t4 out_col = input.col * texture0.Sample(sampler0, input.uv);             return out_col;             }"
      ;
      *(undefined8 *)(unaff_RBP + 0x10) = 5;
      FUN_140303fe4();
      cVar1 = FUN_14036b33b(*(undefined4 *)(unaff_RBP + 0x24));
      FUN_1402133c2();
      iVar3 = *(int *)(unaff_RBP + 0x24);
      if (cVar1 != '\0') {
        *(int *)unaff_RSI[1] = iVar3;
      }
    }
    FUN_140304138();
    return;
  }
  thunk_FUN_1403118e2(unaff_RBP + -0x50);
  return;
}


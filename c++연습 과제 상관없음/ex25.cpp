*VecF& VecF::operator=(const VecF& fv) {
	if (n != fv.n) {
		delete[]arr;
		arr = new float[n = fv.n];

	}

}
memcpy(arr, fv.arr, sizeof(float)* n);
return *this;
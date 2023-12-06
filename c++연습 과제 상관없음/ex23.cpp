Complex2 Complex2::operator+(const Complex2& c) const {
	Complex2 tmp(*this);
	tmp.rPart += c.rPart;
	tmp.iPart += c.iPart;

	return tmp;
}